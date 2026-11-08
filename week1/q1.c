#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int s=1;
    int count=2;
    while(s<=n){
        count++;
        i++;
        count++;
        s+=i;
        count++;
    }
    int answer=count+1;
    printf("%d",answer);
    return 0;
}
