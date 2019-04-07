#include <iostream>
#include <math.h>
using namespace std;

bool isPrime( int );
void Intercambiar( int &, int & );
void QuickSort( int [], int, int );
void Resize( int *, int, int );
void Remove( int *, int, int );
void Repeated( int *, int );

int main() {

	int T, L1, L2, N, c = 0, cont = 1;
	cin >> T;

	while( T > 0 ) {
		
		cin >> N >> L1;
		int *data, *mens, *cod;
		char ABC[ 26 ] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 
        'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
        'Y', 'Z' };
		
		L2 = L1 + 1;


		data = new int[ L1 ];
		mens = new int[ L2 ];
		cod = new int[ L2 ];

		for( int i = 0; i < L1; i++ ) {
            cin >> *( data + i );
        }
		
		for( int i = 2; i <= N; i++ ) {
			if( isPrime( i )) {
				int temp1 = *( data + c ) / i;
                int temp2 = *( data + c ) % i;
                if( temp2 == 0 && isPrime( temp1 )) {
                    *( mens + c ) = i;
                    *( mens + c + 1 ) = temp1;
                    break;
                }
            }
        }

		for( int i = 1; i < L1; i++ ) {
            *( mens + i + 1 ) = *( data + i ) / *( mens + i );
        }

		for( int i = 0; i < L2; i++ ) {
			*( cod + i ) = *( mens + i );
		}

		Repeated( cod, L2 );
		QuickSort( cod, 0, 25 );

		for( int i = 0; i < L2; i++ ) {
			for( int j = 0; j < 26; j++ ) {
				if(*( mens + i ) == *( cod + j )) {
					*( mens + i ) = j;
					break;
				}
			}
		}
		
		cout << "Case #" << cont << ": ";
		for( int i = 0; i < L2; i++ ) {
			cout << *( ABC + *( mens + i ));
		}

		cout << endl;

		delete[] data;
		delete[] mens;
		delete[] cod;

		cont++;
		T--;
	}
	return 0;
}

bool isPrime( int num ) {
    if( num < 2 )
        return false;
    else if( num == 2 )
        return true;
    else if( num % 2 == 0 )
        return false;
    for( int i = 3; i <= sqrt( num ); i += 2 ) {
        if( num % i == 0 )
            return false;
    }
    return true;
}

void Remove( int *arr, int size, int pos ) {
	for( int i = pos; i < size - 1; i++ )
		*( arr + i ) = *( arr + i + 1 );
	Resize( arr, size, size - 1 );
}

void Resize( int *arr, int size, int newsize ) {
	int *temp = new int[ newsize ];
	int minsize = ( size > newsize ) ? newsize : size;
	for( int i = 0; i < minsize; i++ )
		*( temp + i ) = *( arr + i );
	arr = temp;
	size = newsize;
	delete[] temp;
}

void Repeated( int *arr, int size ) {
    for( int i = 0; i < size; i++ ) {
        for( int j = 0; j < size; j++ ) {
            if( *( arr + i ) == *( arr + j ) && ( i != j ))
                Remove( arr, size, j );
        }
    }
}

void QuickSort( int arr[], int left, int right ) {

      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;

            while (arr[j] > pivot)
                  j--;

            if (i <= j) {
                  Intercambiar( arr[ i ], arr[ j ]);
                  i++;
                  j--;
            }
      }

      /* recursion */
      if (left < j)
            QuickSort( arr, left, j );

      if (i < right)
            QuickSort( arr, i, right );

}

void Intercambiar( int &a, int &b ) {
      int tmp;
      tmp = a;
      a = b;
      b = tmp;
}