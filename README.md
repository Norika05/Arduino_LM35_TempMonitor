```markdown
# Arduino LM35 Temperature Monitor

## Mô tả
Dự án đọc nhiệt độ từ 3 cảm biến LM35 thông qua vi điều khiển Arduino, gửi dữ liệu qua cổng Serial theo định dạng JSON và hiển thị đồ thị trên PC.

## Tính năng
- Đọc nhiệt độ cùng lúc từ 3 kênh cảm biến LM35 (A0, A1, A2).
- Đóng gói và gửi dữ liệu qua Serial theo định dạng JSON chuẩn xác.
- Hiển thị đồ thị nhiệt độ trực quan trên ứng dụng PC (C#).
- Có bản mô phỏng mạch trên phần mềm Proteus.

## Phần cứng cần thiết
| Linh kiện | Số lượng | Ghi chú |
| --- | --- | --- |
| Arduino UNO R3 | 1 | Vi điều khiển xử lý chính |
| Cảm biến LM35 | 3 | Cảm biến đo nhiệt độ |
| Dây cắm (Jumper) | Nhiều | Kết nối các linh kiện |
| Breadboard | 1 | Test board cắm linh kiện |

## Hướng dẫn sử dụng
1. Lắp ráp mạch theo sơ đồ nguyên lý.
2. Mở file `LM35_TempReader.ino` bằng Arduino IDE.
3. Nạp code (Upload) xuống board Arduino.
4. Mở ứng dụng trên PC hoặc Serial Monitor để theo dõi dữ liệu JSON trả về.

## Cấu trúc thư mục
```text
Arduino_LM35_TempMonitor/
├── docs/
├── firmware/
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino
├── libs/
├── pc_app/
├── simulation/
└── README.md
```

## Thành viên nhóm
- **Nguyễn Trung Tín** (Chủ repo)
- **Nguyễn Trung Hậu** (Collaborator)
```
```
## Tác giả
[Nguyễn Trung Tín](https://Norika05.github.io) - Sinh viên PTIT
```