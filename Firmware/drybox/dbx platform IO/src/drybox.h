// wifi options
const char* ssid = "FA-PRO3D";
const char* password = "79496261";
#define DWC_NAME "vd36hc.local"              // name/IP of DWC 
#define FLASH_LED 4              //LED to blink on wifi connection
#define DRYBOX_NAME "drybox"     //local name of esp32
int reportTime = 500;            // report weight to DWC interval
int refreshTime = 5000;          // web site refresh time
int ahtReadTime = 2000;          // time to read temperature and RH
