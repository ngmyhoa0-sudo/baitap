# Lab 3 - Bai 3

## Cac ham pthread_attr_* su dung

1. pthread_attr_init(&attr)
   - Khoi tao bien attr voi gia tri mac dinh

2. pthread_attr_setstacksize(&attr, size)
   - Set kich thuoc stack cho thread, o day la 1MB

3. pthread_attr_setdetachstate(&attr, state)
   - PTHREAD_CREATE_DETACHED: thread tu dong giai phong tai nguyen khi ket thuc
   - PTHREAD_CREATE_JOINABLE: can goi pthread_join() de giai phong

4. pthread_attr_destroy(&attr)
   - Huy bien attr sau khi su dung xong

## Ket qua
Thread dang chay!
