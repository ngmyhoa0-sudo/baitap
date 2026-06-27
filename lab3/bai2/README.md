# Lab 3 - Bai 2

## Code
Chuong trinh su dung fork() de tao tien trinh con.

## Ket qua chay
I see 17 coconuts!

## Giai thich
- Ban dau bien num_coconuts = 17
- fork() duoc goi, tao ra tien trinh con
- fork() tra ve 0 cho tien trinh con, tra ve PID > 0 cho tien trinh cha
- Tien trinh con (pid == 0): set num_coconuts = 42 roi goi exit(0) nen khong in gi
- Tien trinh cha (pid > 0): goi wait(NULL) cho den khi tien trinh con ket thuc
- fork() tao ban sao rieng biet cua bo nho, nen tien trinh con thay doi num_coconuts
  khong anh huong den bien num_coconuts cua tien trinh cha
- Cuoi cung tien trinh cha in ra: I see 17 coconuts!
