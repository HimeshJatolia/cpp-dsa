#include <iostream>
using namespace std;

void showsquare(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << "-*";
        }
        cout << endl;
    }
}

void showrightangle(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "-*";
        }
        cout << endl;
    }
}

void scountrightangle(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void scountrightangler(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void uppertri(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pyrimid(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << "-";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << i;
        }
        for (int l = 1; l <= n - i; l++)
        {
            cout << "_";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i - 1; j++)
        {
            cout << "-";
        }
        for (int k = 1; k <= 2 * n - 2 * i + 1; k++)
        {
            cout << i;
        }
        for (int l = 1; l <= i - 1; l++)
        {
            cout << "_";
        }
        cout << endl;
    }
}

void halfkatli(int n)
{
    for (int i = 1; i <= 2 * n; i++)
    {
        int star = i;
        if (i > n)
            star = n * 2 - i;
        for (int j = 1; j <= star; j++)
        {

            cout << "*";
        }
        cout << endl;
    }
}

void onezero(int n)

{
    for (int i = 1; i <= n; i++)
    {
        int temp ;
        if (i % 2 == 1)
            {
                temp = 1;
            }
            else
            {
                temp = 0;
            }
        for (int j = 1; j <= i; j++)
        {
            
            cout<<" "<<temp;
            temp=1-temp;
        }
        cout << endl;
    }
}

void lo3op(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"-";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

}

void numtri(int n){
    for(int i=1;i<=n;i++){
        int num=1;
        for(int j=1;j<=i;j++){
           
            cout<<num;
            num=num+1;
        }
        cout<<endl;

    }
}

void alphabet(int n){
    for(int i=0;i<=n;i++){
        for(char j='A';j<='A'+n-i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    for(int i=0;i<=n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    for(int i=0;i<=n;i++){
        for(char c='a';c<='a'+i;c++){
            char temp='a'+i;
            cout<<temp;
        }
        cout<<endl;
    }
}
//felt hard this midcahr
void midcahr(int n){

    for(int i=0;i<n;i++){
        char c='A';
        
        int temp=(2*i+1)/2;
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=2*i;j++)
        {
            cout<<c;
            if(j<temp){
            
            c++;
            }
            else{
            c--;
            }
        }
        for(int j=0;j<n-i-1;j++)
        {

            cout<<" ";
        }
        cout<<endl;
    }
}

void Eprob(int n){
    for(int i=0;i<n;i++){
        for(char c='E'-i;c<='E';c++){
            cout<<c;
        }
        cout<<endl;
    }
}


void censquare(int n){
 for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }

    for(int j=0;j<2*i;j++){
        cout<<" ";
    }

    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<endl;
 }
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }

    for(int j=1;j<=2*n-2*i;j++){
        cout<<" ";
    }

    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
 }
}

void buttuerfly(int n){
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        int space=2*n-2*i;
        if(space<=0) space=space*-1;
        if(star>(2*n)/2) star=2*n-i;
        for(int j=1;j<=star;j++){

            cout<<"*";
            
        }
        for(int j=1;j<=space;j++){
            cout<<" ";

        }
        for(int j=1;j<=star;j++){

            cout<<"*";
            
        }
        cout<<endl;

    }

}

void square1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( j==0 || i==0 ||j==n-1 ||i==n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}
void problem22(int n){
    for(int i=0;i<2*n-1;i++){
        
        for(int j=0;j<2*n-1;j++){
             int top=i;
            int down=2*n-2-i;
            int left=j;
            int right=2*n-2-j;
            cout<<min(min(top,down),min(left,right));
        }
        cout<<endl;
    }
}

int main()
{

    int a = 5;
    //--square pattern
    // showsquare(a);

    //--Right angle
    // showrightangle(a);

    //--show cout in rightangle
    // scountrightangle(a);

    // 1
    // 12
    // 123
    // 1234
    // 12345

    //--show cout right angle repeat number
    //   scountrightangler(a);
    // 1
    // 22
    // 333
    // 4444
    // 55555

    // upper triangle

    // uppertri(a);

    // pyrimid(5);
    // halfkatli(5);
    //onezero(5);
    //lo3op(4);
    //numtri(4);
    //alphabet(5);
    // midcahr(4);
    // Eprob(5);
    // censquare(5);
    // buttuerfly(5);
    problem22(3);
}