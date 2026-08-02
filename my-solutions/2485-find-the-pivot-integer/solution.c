int pivotInteger(int n) {
   int i = (n*(n+1))/2;
   int x = sqrt(i);
   if (x*x == i) return x;
   return -1; 
}
