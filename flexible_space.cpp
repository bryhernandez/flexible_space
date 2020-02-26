#include <iostream>
using namespace std;

int main(){
  int width;
  int board;

  cin >> width;
  cin >> board;
  int * board_arr= new int[board];
  bool * width_arr= new bool[width+1];

  for(int i = 0; i < board; i++) { 
      cin >> board_arr[i];
      width_arr[board_arr[i]] = true;
      width_arr[width-board_arr[i]] = true;
  }

  for(int i = 0; i < board; i++)
    for(int j = i+1; j < board; j++)
      width_arr[board_arr[j]-board_arr[i]] = true;

  width_arr[width] = true;

  for(int i = 0; i <= width; i++){
    if(i != 0 && width_arr[i] == true)
	    cout << i << " ";
  }
}
