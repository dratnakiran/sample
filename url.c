#include <stdio.h>
#include <string.h>

void main()
{
char url[50], AccessToken[]= "jklfjsadlkfjasdkfj";
snprintf(url, 50, "%s%s", "/api/", AccessToken);
	snprintf(url + strlen(url), 50 - strlen(url), "%s", "/lights/");
     printf("%s\n", url);

}
