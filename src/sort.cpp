#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

long int arr_size;
long int max_size;




int main() {
 cout << "Enter a number for max number in list" << endl;
 cin >> max_size;
 cout << "Enter a number for max list size" << endl;
 cin >> arr_size;




    long int smaller_holder;
    long int larger_holder;
    long int no_swap = 0;
    long int y;
    long int z;
    long int i;
    time_t startTime;
    time_t endTime;
    long int comparisons;
    int b;
    int d;



long int ar[arr_size];
cout << "Shuffling..." << endl;


long int a;

  srand(time(NULL));
 for (a = 0; arr_size >= a; a++) {

   ar[a] = rand() % max_size;
 }

cout << "Shuffle complete" << endl;
cout << "Sorting..." << endl;
startTime = time (NULL);

  while (no_swap < arr_size) {
        cout << "next scan" << endl;
  no_swap = 0;
    for (y = 0; arr_size - 1 >= y ; y++){// inital scan through entire array, comparing and switching pairs until array ends
     long int z = y + 1;
     comparisons ++;
      if (ar[y] < ar[z] ) {

             cout << "Integer #" << y << " : " << ar[y] << ", swapped with Integer #" << z << " : " << ar[z] <<  endl;

           smaller_holder = ar[y];
           larger_holder = ar[z];
           ar[y] = larger_holder;
           ar[z] = smaller_holder;
           no_swap = 0;

           cout << "Integer #" << y << " now has a value of: " << ar[y] << endl;
           cout << "Integer #" << z << " now has a value of: " << ar[z] << endl;


    } else {

              no_swap++;
            cout << "Integers ignored, check " << no_swap <<endl;

              }

    };

  };

endTime = time(NULL);
long int seconds = endTime - startTime;
if (seconds == 0){
    seconds = 1;
};
cout << "sorted m8" << endl;
cout << comparisons << " comparisons made."<< comparisons / seconds << " avg. comparisons/sec. Took "<< seconds << " seconds." << endl;
cout << "enter any character to print the array" << endl;

cin >> d;
for (i = 0; arr_size > i; i++){

         cout << ar[i] << endl;
};

cin >> b;
return 0;

};
