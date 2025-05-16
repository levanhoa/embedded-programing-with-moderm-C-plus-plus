#include<iostream>

int main(void)
{
    std::cout << "Hello work" <<std::endl;
    // return 0;
}

/* Analysis

case 1: 
    #include<iostream> câu lệnh này được khai báo tiền xử lý và bao gồm các nội dung của std c++ heard file iosteam.

    ==> tiền xử lý là gì:
        ==> Các tiền xử lý luôn bắt dầu là dấu # và không kết thúc bởi dấu ;
       ==> tiền xử lý là được xử lý trước khi biên dịch xảy ra. 
        Ví dụ:
           #include <iostream>

            Định nghia hằng số hoặc macrro:
           #define PI 3.14

           Điều kiện biên dịch: #ifdef , #ifndef , #endif , #if ...

           Thông báo lỗi: sử dụng #error

           Nhưng chỉ thị khác: #pragma


    iostream là một thư viện của std c++ , chứa các hàm input và output xuất ra (I/O).


case 2:
    return 0;
    nếu hàm main trả về 0 thì chương trình đã chạy thành công.

    trường hợp hàm main không có return 0 luôn thì có vấn đề gì không ? 
    ==> hàm main vẫn hoạt động bình thương và sẽ trả về mặc định là 0 nếu thành công. 
    VD: 
        int main(void)
        {
        std::cout << "Hello work" <<std::endl;
        }
*/