// #include <iostream>
// using namespace std;

// int main(){
//     int arr1[] = {1,2,3,4,3};
//     int arr2[] ={1,2,3};
//     int visited = -1;

//     for (int i = 0; i<4; i++){
//         if(arr1[i] == visited )
//         continue;

//         for (int j = 0; j < 3; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 arr1[i] = visited;      
//                 cout<<arr2[j];
//             }
            
//         }
        
//     }
// }
//Aboid Time limit execed
#include <iostream>
using namespace std;

int main(){
    int arr1[] = {1,2,3,4,3};
    int s1 = sizeof(arr1) /sizeof(arr1[0]);
    int arr2[] ={1,2,3};
    int s2 = sizeof(arr2) /sizeof(arr2[0]);
    int i = 0,j = 0;
    while (i < s1 && j <s2)
    {
        if (arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<' ';
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            j++;
        }else{
            i++;
        }
        
    }
    
}