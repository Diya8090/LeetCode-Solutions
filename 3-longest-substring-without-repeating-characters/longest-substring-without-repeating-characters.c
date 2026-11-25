int lengthOfLongestSubstring(char* s) {
    int MaxHeap[256];
    for(int i=0;i<256;i++){
        MaxHeap[i]=-1;
    }

    int maxLength=0;
    int left=0;

    for(int right=0;s[right]!='\0';right++){
        char currentChar=s[right];

        if(MaxHeap[currentChar]>=left){
            left=MaxHeap[currentChar]+1;
        }
        MaxHeap[currentChar]=right;

        int currentLength=right-left+1;
        if(currentLength>maxLength){
            maxLength=currentLength;
        }
    }

   return maxLength; 
}