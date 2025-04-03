#define led D4 //Định nghĩa một hằng số led có giá trị là D4 (chân GPIO2 trên ESP8266).

//Đây là hàm khởi tạo chương trình, chỉ chạy một lần duy nhất khi ESP8266 được bật hoặc reset.
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); //Thiết lập chân D4 (GPIO2) làm chân xuất tín hiệu (OUTPUT).
  Serial.begin(115200);  //Khởi tạo giao tiếp UART (Serial) giữa ESP8266 và máy tính.
  Serial.println(); // Gửi một dòng trống đến Serial Monitor.
  Serial.print("Hello world!"); // Gửi chuỗi "Hello world!" đến Serial Monitor.


}

void loop() {
  // put your main code here, to run repeatedly:

  
}
