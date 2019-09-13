#include <stdio.h>
#include <string.h>

void main()
{
char url[100], AccessToken[]= "jklfjsadlkfjasdkfj";
snprintf(url, 100, "%s%s", "/api/", AccessToken);
	snprintf(url + strlen(url), 100 - strlen(url), "%s", "/lights/");
     printf("%s\n", url);

}
