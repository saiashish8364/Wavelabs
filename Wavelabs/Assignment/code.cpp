#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //replace custom input values here.
    //Do not touch code above

    int times[3][3]={{1,2,1},{2,3,1},{3,4,1}};
    int n=4;
    int k=1;//signal node times[0][0];

   //replace ends.
   //Do not touch code below
   int visited[n];
   visited[0]=k;
   size_t size=1;
   int counter=1;
   int start;
   int end;
   int sg=0,eg=0;
       for(auto& time:times)
       {
           start=time[0];
           end=time[1];
           int element=time[1];
           int vlen = sizeof(visited) / sizeof(*visited);
            bool exists = find(visited, visited + vlen, element) != visited + vlen;
            if (!exists) {
                visited[size++]=time[1];
                counter++;
                if(start>end){
                    sg++;
                }
                else{
                    eg++;
                }
            } 
            else {
                cout<<"-1";
                return -1;
            }
        }
   //(sg>eg)? cout<<sg : cout<<eg;
   if(counter == n){
       if(sg>eg){
           cout<<sg;
           return sg;
       }
       else{
           cout<<eg;
           return eg;
       }
   }
   else {
        cout<<"-1";
        return -1;
    }
}
