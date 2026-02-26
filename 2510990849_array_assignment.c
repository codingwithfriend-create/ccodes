1.

#include <stdio.h>

 

int main() {

   int m, n, i, j, found = 0;

   scanf("%d", &m);

   int arr[m];

   for(i = 0; i < m; i++) scanf("%d", &arr[i]);

   scanf("%d", &n);

   

   for(i = 0; i < m; i++) {

       for(j = i + 1; j < m; j++) {

           if(arr[i] + arr[j] == n) {

               printf("Lucky Pair: (%d, %d)\n", arr[i], arr[j]);

               found = 1;

           }

       }

   }

   if(!found) printf("No Lucky Pair found\n");

   return 0;

}

2.

#include <stdio.h>

 

int main() {

   int n, i;

   scanf("%d", &n);

   int freq[7] = {0};

   for(i = 0; i < n; i++) {

       int x; scanf("%d", &x);

       freq[x]++;

   }

   for(i = 1; i <= 6; i++) {

       if(freq[i]) printf("%d:%d\n", i, freq[i]);

   }

   return 0;

}

3.

#include <stdio.h>

 

int main() {

   int n, k, i;

   scanf("%d %d", &n, &k);

   k %= n;

   int arr[n];

   for(i = 0; i < n; i++) scanf("%d", &arr[i]);

   

   for(i = n - k; i < n; i++) printf("%d ", arr[i]);

   for(i = 0; i < n - k; i++) printf("%d ", arr[i]);

   printf("\n");

   return 0;

}

4.

#include <stdio.h>

 

int main() {

   int gems[20], target, i, count = 0;

   for(i = 0; i < 20; i++) scanf("%d", &gems[i]);

   scanf("%d", &target);

   

   for(i = 0; i < 20; i++) {

       if(gems[i] == target) count++;

   }

   

   if(count) printf("The gemstone appears %d times.\n", count);

   else printf("The gemstone is not in the collection.\n");

   return 0;

}

5.

#include <stdio.h>

 

int main() {

   int rain[7], i, total = 0, dry = 0, flash = 0;

   for(i = 0; i < 7; i++) {

       scanf("%d", &rain[i]);

       total += rain[i];

       if(rain[i] == 0) dry = 1;

       if(rain[i] > 100) flash = 1;

   }

   

   printf("Total Rainfall: %d mm\n", total);

   printf("Average Daily Rainfall: %d mm\n", total / 7);

   

   if(total > 500) printf("Heavy Rainfall Alert\n");

   if(flash) printf("Flash Flood Warning\n");

   if(total == 0) printf("Drought Alert\n");

   else if(dry) printf("Dry Spell Detected\n");

   

   return 0;

}