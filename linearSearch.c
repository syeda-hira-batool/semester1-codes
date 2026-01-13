
// we dont know the last index of the search

#include <stdio.h> 
#include <string.h>
int main() {
    
    int index=0;
	char names[][20] = {
        "hira",
        "fatima",
        "ali",
        "ahmed",
        "sana"
        ""
    };
	char found = 'F';
	char user[1000];
	
    printf("Enter the name you want to find: ");
    scanf("%s" , &user );
   
    
    
    
    while (names[index][0] != '/0' || found == 'T') {
        
		if (strcmp(names[index] ,user) == 0) {
			found = 'T';
			break;
		}
        index ++ ;
   
   
    }
    
    if(found == 'T'){
	printf("Your desired search is found on the position: %d \n" , index+1);
	}
    
    return 0;
}
