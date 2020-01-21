#ifndef QUOTE_CONFIG_H
#define QUOTE_CONFIG_H

//行情IP地址与端口 联通
#define DEFAULT_IP		("192.168.26.123")
#define DEFAULT_PORT	(8886)


extern bool isdisconnect ;

//授权码
#define DEFAULT_AUTHCODE	("B112F916FE7D27BCE7B97EB620206457946CED32E26C1EAC946CED32E26C1EAC946CED32E26C1EAC946CED32E26C1EAC5211AF9FEE541DDE9D6F622F72E25D5DEF7F47AA93A738EF5A51B81D8526AB6A9D19E65B41F59D6A946CED32E26C1EACCAF8D4C61E28E2B1ABD9B8F170E14F8847D3EA0BF4E191F5DCB1B791E63DC196D1576DEAF5EC563CA3E560313C0C3411B45076795F550EB050A62C4F74D5892D2D14892E812723FAC858DEBD8D4AF9410729FB849D5D8D6EA48A1B8DC67E037381A279CE9426070929D5DA085659772E24A6F5EA52CF92A4D403F9E46083F27B19A88AD99812DADA44100324759F9FD1964EBD4F2F0FB50B51CD31C0B02BB437")

//用户名密码
#define DEFAULT_USERNAME	("ES")
#define DEFAULT_PASSWORD	("123456")

//订阅的行情
#define DEFAULT_EXCHANGE_NO		("HKEX")
#define DEFAULT_COMMODITY_TYPE	(TAPI_COMMODITY_TYPE_FUTURES)
#define DEFAULT_COMMODITY_NO	("HSI")
#define DEFAULT_CONTRACT_NO		("1705")

#endif // QUOTE_CONFIG_H
