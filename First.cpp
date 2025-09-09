#include <iostream>
using namespace std;

int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int allSum(int arr[], int size){
    int sum = 0;

    for(int i = 0 ; i < size; i++){
        sum+=arr[i];
    }

    return sum;
}

int allPro(int arr[], int size){
    int pro = 1;

    for(int i = 0 ; i < size; i++){
        pro*=arr[i];
    }

    return pro;
}

void intersection (int arr1[],int size1, int arr2[],int size2){
    for(int i = 0; i < size1 ; i++){
        for(int j = 0; j < size2;j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}

int main()
{
    int N;
    cin>>N;

    for(int i =0; i< N; i++){
        char ch = 'A';
        for(int j =0; j< N-i;j++){
            cout<<ch++;
        }
        for (int k = 0 ; k < i*2-1; k++){
            cout<<" ";
        }
        if(i==0){
            ch--;
        }
        for(int l = 0; l < N-i && l< N-1; l++){
            cout<<--ch;
        }
        cout<< endl;
    }

    // for(int i = 0; i < N; i++){
    //     for(int j = 0 ; j < N - i-1 ; j++){
    //         cout << " ";
    //     }

    //     for(int k = 0; k <= i; k++){
    //         cout<<k+1;
    //     }
    //     for (int l = i; l>0;l--){
    //         cout<<l;
    //     }
    //     cout<<endl;

    // }

    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < i * 2 + 1; k++)
    //     {
    //         if (k == 0 || k == i * 2)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for(int i = 0 ; i< N-1; i++ )
    // {
    //     for(int j = 0; j<= i; j++){
    //         cout<<" ";
    //     }
    //     for(int k = (N-i-1)*2 -1; k >0; k--){
    //         if(k == (N-i-1)*2 -1 || k ==1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n,sum=0;
    // cout<<"Enter a Number: ";
    // cin>>n;

    // while(n){
    //     int a = n%10;
    //     sum+=a;
    //     n/=10;
    // }

    // cout<<"Sum of the given Number is : "<< sum <<endl;
    // cout<<"enter value of n : ";
    // int n;
    // cin>>n;
    // cout<<"enter value of r : ";
    // int r;
    // cin>>r;

    // cout<<"the value of nCr is : "<<fact(n)/(fact(r)*fact(n-r))<<endl;

    // int decN = 0;
    // int binN;
    // cin>>binN;

    // int pow = 1 ;

    // while(binN){
    //     int rem = binN%10;
    //     binN /= 10;
    //     decN += rem * pow;
    //     pow *= 2;
    // }

    // cout<<"Decimal Number of Given Binary is : "<<decN<<endl;

    // cin>>N;
    // int pow2 = 1;

    // while(true){
    //     pow2 =2*pow2;
    //     if(pow2 >= N){
    //         break;
    //     }
    // }
    // cout<<"Power2 is : "<<pow2<<endl;
    // if(pow2 == N){
    //     cout<<"It is power of 2";
    // }
    // else{
    //     cout << "Not power of 2";
    // }

    // take a number
    // least significant number
    // store it in a variable
    // number decrease

    // cin>>N;
    // int revN=0;
    // while(N){
    //     int r = N %10;
    //     revN = revN * 10 + r;
    //     N /= 10;
    // }

    // cout<<revN;

    // int arr[5] = {0, 2, 7, 5, -11};
    // int value = 7;

    // int index = 0;
    // bool isFound = false;

    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     if (arr[i] == value)
    //     {
    //         index = i;
    //         isFound = true;
    //         break;
    //     }
    // }
    // if (isFound)
    // {
    //     cout << " Number present at : " << index << endl;
    // }

    int arr[10] = {1,2,3,4,1,2,3,4,5,6};

    // int start = 0;
    int size =sizeof(arr)/sizeof(int);
    // int end = size-1;

    
    // for(int i = 0; i < size ; i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;

    // while(start < end){

    //     swap(arr[start++],arr[end--]);

    //     start++;
    //     end--;
    // }

    // for(int i = 0; i < size ; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int maxN = INT32_MIN;
    // int minN = INT32_MAX;

    // int maxI = 0;
    // int minI = 0;

    // for(int i = 0; i< size; i++){
    //     if(maxN < arr[i]){
    //         maxN = arr[i];
    //         maxI = i;
    //     }
    //     if(minN > arr[i]){
    //         minN = arr[i];
    //         minI = i;
    //     }
    // }

    // swap(arr[maxI],arr[minI]);

    // for(int i = 0 ;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    // for(int i =0; i< size; i++){
    //     int count = 0 ;
    //     for(int j = 0; j < size; j++){
    //         if(arr[i] == arr[j]){
    //             count++;
    //         }
    //     }

    //     if(count == 1){
    //         cout<<arr[i]<<" ";
    //     }

    // }

    // int arr1[] ={4,5,6,1,2};
    // int arr2[] ={1,2,3,4,5};
    // int size1 = sizeof(arr1)/sizeof(int);
    // int size2 = sizeof(arr2)/sizeof(int);
    // intersection(arr1,size1,arr2,size2);

    return 0;
}