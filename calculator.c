#include<stdio.h>
#include<math.h>

//factorial calculation
int facto(int n){

    if(n==0 || n==1){
        return 1;
    }
        else{
            return n*facto(n-1);
        }
}


//power calculation
int power(int a, int b){

return pow(a,b);

}


//square root calculation
int squareroot(int n){
    int a=0;
   for(int i=0;i<n;i++){
     a=a+n;
   }
   return a;
}


int main(){

printf("%d\n",facto(5));
printf("%d\n",power(2,3));
printf("%d\n",squareroot(5));

    return 0;
}