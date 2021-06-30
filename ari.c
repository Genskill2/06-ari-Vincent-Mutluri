string ari(string s)
  {
  int c=0; // increases count of characters
  int k=0; // increases count of spaces
  int j=0; // increases count of sentences
  int temp =0;
  string ret;
 
  for(int i=0;i<strlen(s);i++)
  {
    if(isalnum(s[i]))
    {
      c++;
    }
    else if(s[i] ==' ')
    {
      k++;
    }
    else if(s[i] =='.' || s[i] =='?' || s[i] =='!')
    {
      j++;
    }
    else if(s[i] =='(')
    { 
       for(int j=i;s[j]!=')';j++)
       {
         if(s[j] =='.' || s[j] == '?' || s[j] == '!')
         {
          temp++;
         }
       }
    }
  }
   printf("%i\n",c);
      printf("%i\n",k);
     printf("%i\n",j-temp);
     
   int r = (int)(4.71 * (float)c/k + 0.5 * (float)k/j - 21.43) + 1;
 
   switch(r){
         case 1: ret = "kinder garten";
   break;
         case 2: ret = "Second Grade"; 
   break;
         case 3: ret = "Third Grade";
   break;
         case 4:  ret = "Fourth Grade";
   break;
         case 5:  ret = "Fifth Grade";
   break;
         case 6:  ret = "Sixth Grade";
   break;
         case 7: ret = "Seventh Grade";
   break;
         case 8:  ret = "Eight Grade";
   break;
         case 9: ret = "Nineth Grade";
   break;
         case 10:  ret = "Tenth Grade";
   break;
         case 11:  ret = "Eleventh Grade";
   break;
         case 12: ret = "Twelfth Grade";
   break;
         case 13: ret = "College Student";
   break;
         case 14: ret = "Professor";
   break;
   default : printf("not found\n");
   }
   return ret;
} 
