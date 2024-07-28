#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[101], i, count= 0;
    string math;
    cin >> math;
    for(i=0; i< math.size(); i++){
      if (math[i] == '+')
      {
        continue;
      }
      else
      {
        arr[count++] = math[i] - '0';
      }
    }
    sort(arr, arr + count);
    for (i = 0; i <= count; i++)
    {
      cout << arr[i];
      if (i == count-1)
      {
        break;
      }
      cout << "+";
    }
}