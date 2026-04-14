#include<iostream>


using std::cout;
using std::cin;
using std::endl;

class ArrayList
{
public:
	int size = 0;
	int capacity = 0;
	int* data;

    ArrayList(int x) {
        size = 0;
        capacity = x;
        data = new int[capacity];
    }

    void resize(){
        capacity = capacity * 2;
        int* ndata = new int[capacity];
        for (int i = 0; i < size; i++) {
            ndata[i] = data[i];
        }
        delete[] data;
        data = ndata;
    }


    void add(int value) {
        if (size >= capacity) {
            resize();
        }
        data[size] = value;
        size++;
    }


    int get(int index) {
        if (index < 0 || index >= size) {
            cout << "nope";
            return;
        }
        return data[index];
    }

    void set(int index, int value) {
        if (index < 0 || index >= size) {
            cout << "nope";
            return;
        }
        data[index] = value;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            cout << "nope";
            return;
        }

        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size--;
    }

    int getSize() {
        return size;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << endl;
        }
    }

    void clean() {
        size = 0;
    }

    void contains(int value){
        for (int i = 0; i < size; i++) {
            if (data[i] == value) {
                cout << "yes";
                return;
            }
        }
        cout << "nope";
    }

    ~ArrayList() {
        delete[] data;
        data = nullptr;
        size = 0;
        capacity = 0;
    }
};



int main(int argc, char** argv) {

    ArrayList list(2);

    list.add(2);
    list.add(2);

    list.print();
    list.contains(3);


	return 0;
}
