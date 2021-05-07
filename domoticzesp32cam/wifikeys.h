// USTAW PODŁĄCZENIE DO TWOJEGO ROUTERA I STAŁY ADRES IP
const char *ssid = "TP-LINK_9A8FBA";       // Wpisz tutaj swoją nazwe sieci wifi
const char *password = "18082018"; // Wpisz tutaj swoje hasło
IPAddress local_IP(192, 168, 0, 150); // Wpisz tutaj swoje stałe ip 192.168.X.X
IPAddress gateway(192, 168, 0, 2); // Wpisz tutaj swoje ip routera 192.168.X.X
IPAddress subnet(255, 255, 255, 0); // Tutaj zazwyvczaj jest bez zmian
