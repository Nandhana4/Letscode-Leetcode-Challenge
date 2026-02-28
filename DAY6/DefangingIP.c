char* defangIPaddr(char* address) {
    int n = strlen(address);
    
    // Each '.' becomes "[.]" → extra 2 chars per dot
    char* result = (char*)malloc(n + 2 * 3 + 1); // safe size
    
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(address[i] == '.') {
            result[j++] = '[';
            result[j++] = '.';
            result[j++] = ']';
        } else {
            result[j++] = address[i];
        }
    }
    
    result[j] = '\0';
    return result;
}
