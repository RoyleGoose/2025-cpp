#include<cstdio>
// я пол часа думал, что не так, минут 15 пытался объяснить deepseekу условия задачи и ещё 5 минут думал о смысле жизни. А надо было int в long long сделать
int main(int argc, char** argv)
{
    long long n;
    long long m;

    scanf_s("%lld %lld", &n, &m);
    printf("%lld", n*m+1-(n+m-1));

    return 0;
}
