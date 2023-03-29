#include <stdio.h>
#include <string.h>
char s[1000001], a, b, space;
long long int memo1[6][1000000] = {0}, memo2[6][1000000] = {0}, memo3[6][6][1000000], p[4] = {0, 2, 3, 5}, q, l, r, i, j, k, k1, k2, len, ans = 0, z = 0, x = 0, alpha = 0;
int main()
{
   gets(s);
   len = strlen(s);
   scanf("%lld", &q);
   for (i = 0; i < len; i++)
      memo1[s[i] - 'a' - 2][i] = 1;
   for (j = 0; j < 4; j++)
   {
      memo2[p[j]][0] = memo1[p[j]][0];
      for (i = 1; i < len; i++)
         memo2[p[j]][i] = memo1[p[j]][i] + memo2[p[j]][i - 1];
   }
   for (j = 0; j < 4; j++)
      for (i = 1; i < len; i++)
         memo2[p[j]][i] = memo1[p[j]][i] + memo2[p[j]][i - 1];
   for (k = 0; k < 4; k++)
      for (j = 0; j < 4; j++)
      {
         ans = 0;
         for (i = 0; i < len; i++)
         {
            ans = ans + memo2[p[k]][i] * memo1[p[j]][i];
            memo3[p[k]][p[j]][i] = ans;
         }
      }
   for (j = 0; j < q; j++)
   {
      scanf("%c%c%c%c", &space, &a, &space, &b);
      scanf("%lld%lld", &l, &r);
      printf("%lld\n", ((l == 1) ? (memo3[a - 'a' - 2][b - 'a' - 2][r - 1]) : memo3[a - 'a' - 2][b - 'a' - 2][r - 1] - memo3[a - 'a' - 2][b - 'a' - 2][l - 2] - ((memo2[a - 'a' - 2][l - 1] - (memo2[a - 'a' - 2][l - 1] - memo2[a - 'a' - 2][l - 2])) * (memo2[b - 'a' - 2][r - 1] - memo2[b - 'a' - 2][l - 2]))));
   }
   return 0;
}