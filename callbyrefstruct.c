#include<stdio.h>
struct stu
{
    int a,b;
}s;
void fun(struct stu *m );
int main()
{
    fun(&s);
    printf("a=%d\n",s.a);
    printf("b=%d\n",s.b);
    return 0;
}
void fun(struct stu *m)
{
    printf("Enter a and b value:\n");
    scanf("%d",&(*m).a);
    scanf("%d",&m->b);
     printf("a=%d\n",m->a);
    printf("b=%d\n",m->b);

}
