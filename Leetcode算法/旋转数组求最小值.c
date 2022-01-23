
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
{
   int left = 0;
   int right = rotateArrayLen - 1;
   while (left < right)
   {
       int mid = (left + right) / 2;
       if (rotateArray[mid] > rotateArray[right])
       {
           left = mid + 1;
       }
       else if(rotateArray[mid] < rotateArray[right])
       {
           right = mid;
       }
       else
       {
           right--;;
       }
   }
   return rotateArray[left];
}