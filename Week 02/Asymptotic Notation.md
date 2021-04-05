# Asymptotic Notations Practice  
26 Sections... How *Exciting!* Fear not, we shall condense it all into a few practice problems. 

Asymptotic Notations is the classification of runtime complexity that uses functions that indicate only the growth rate of a bounding function.
Basically, saying something is **O(n)** is saying that the algorithm's _asymptotic notation_ is **O(n)**.

1. First, create your own definition for **Asymptotic Notation**

Asymptotic Notation includes **O(n), \Omega(n), \Theta(n)**.
As a practice, go ahead and find the asymptotic notations for the following codes.

1. **O( )**
```c++
int Exponential(int x, int n) {
    int y = 0;
    if (n == 0) {
        return 1;
    }
    else if (n == 1)                
        return x;
    else if (n % 2 == 0) {        
        y = Exponential(x, n/2); 
        return y * y;
    }
    else {
        y =  Exponential(x, (n - 1)/2); 
    }

    return y * y * x;
}
```
2. **O( )**
```c++
for ( int i = 0 ; i < N; ++i) {
    for ( int j = 0 ; j < i; ++j) {
        printf("%d\n", i);
    }
}
```
3. **O( )**
```c++
int Recurse(int numbers[], int numbersSize, int key) {
   int mid = 0;
   int low = 0;
   int high = numbersSize - 1;
   
   while (high >= low) {
      mid = (high + low) / 2;
      if (numbers[mid] < key) {
         low = mid + 1;
      }
      else if (numbers[mid] > key) {
         high = mid - 1;
      }
      else {
         return mid;
      }
   }
   
   return -1; 
}
```
4. **O( )**
```c++
printf("%d\n", Hello);
printf("%d\n", Hello);
printf("%d\n", Hello);
printf("%d\n", Hello);
printf("%d\n", Hello);
printf("%d\n", Hello);
```
5. **\Theta( )**
```c++
int Exponential(int x, int n) {
    int y = 0;
    if (n == 0) {
        return 1;
    }
    else if (n == 1)                
        return x;
    else if (n % 2 == 0) {        
        y = Exponential(x, n/2); 
        return y * y;
    }
    else {
        y =  Exponential(x, (n - 1)/2); 
    }

    return y * y * x;
}
```
6. **O( )**
```c++
Fibonacci(N) {
  if ((1 == N) || (2 == N)) {
     return 1
  }
  return Fibonacci(N-1) + Fibonacci(N-2)
}
```
7. **O( )** 
```c++
for (i = 1; i < numbersSize; ++i) {
    j = i;
    // Insert numbers[i] into sorted part
    // stopping once numbers[i] in correct position
    while (j > 0 && numbers[j] < numbers[j - 1]) {
        // Swap numbers[j] and numbers[j - 1]
        temp = numbers[j];
        numbers[j] = numbers[j - 1];
        numbers[j - 1] = temp;
        --j;
    }
}
```