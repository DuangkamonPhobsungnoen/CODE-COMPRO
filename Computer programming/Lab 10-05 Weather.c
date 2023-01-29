#include <stdio.h>
#include <string.h>

struct Weather
{
  char outlook[9];
  int temp;
  int humidity;
  char wind[2];
};

int main()
{
  int amount;
  struct Weather weather;
  scanf("%d", &amount);

  for (int i = 0; i < amount; i++)
  {
    scanf("%s %d %d %s", weather.outlook, &weather.temp, &weather.humidity, weather.wind);
    if (strcmp(weather.outlook, "rain") == 0 && strcmp(weather.wind, "T") == 0)
    {
      printf("no\n");
    }
    else if (strcmp(weather.outlook, "sunny") == 0 && weather.humidity > 77.5)
    {
      printf("no\n");
    }
    else
    {
      printf("yes\n");
    }
  }
  return 0;
}
