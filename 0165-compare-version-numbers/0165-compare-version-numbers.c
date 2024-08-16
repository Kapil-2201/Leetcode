int compareVersion(char* version1, char* version2) {
    int i = 0, j = 0;
    
    while (i < strlen(version1) || j < strlen(version2)) {
        int v1 = 0, v2 = 0;
        
        while (i < strlen(version1) && version1[i] != '.') {
            v1 = v1 * 10 + (version1[i] - '0');
            i++;
        }

        while (j < strlen(version2) && version2[j] != '.') {
            v2 = v2 * 10 + (version2[j] - '0');
            j++;
        }
 
        if (v1 > v2) return 1;
        if (v1 < v2) return -1;

        i++;
        j++;
    }
    
    return 0;
}