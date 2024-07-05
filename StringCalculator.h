int isEmptyString(const char *str) {
    // Check if the string is NULL or the first character is '\0'
    if(str == NULL || *str == '\0')
    {   
        return 1;
    }
}

int add(const char* input){
    // Check if the string is NULL or the first character is '\0'
   if(isEmptyString(input))
    {
   return 0;
    }
    return -1;
}



