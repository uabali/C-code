//
// Created by Umut Abalı on 28.03.2024.
//
#include <stdio.h>
#include <unistd.h>

int main() {
    void *old_brk, *new_brk;

    // Mevcut bellek adresini al
    old_brk = sbrk(0);
    printf("Mevcut brk adresi: %p\n", old_brk);

    // Bellek alanını genişletmek için 1MB ekleyelim
    int increment = 1024 * 1024; // 1 MB
    new_brk = sbrk(increment);

    if (new_brk == (void*)-1) {
        printf("Bellek alanını genişletme başarısız.\n");
    } else {
        printf("Yeni brk adresi: %p\n", new_brk);
    }

    // Mevcut brk adresini tekrar al
    old_brk = sbrk(0);
    printf("Mevcut brk adresi (yeniden alındı): %p\n", old_brk);

    // Bellek alanını daraltmak için brk() kullanalım
    void *shrink_brk = (char*)new_brk - increment / 2; // 0.5 MB daraltalım
    int result = (int) brk(shrink_brk);

    if (result == 0) {
        printf("Bellek alanını daraltma başarılı.\n");
    } else {
        printf("Bellek alanını daraltma başarısız.\n");
    }

    // Mevcut brk adresini bir kez daha alalım
    old_brk = sbrk(0);
    printf("Mevcut brk adresi (daraltıldı): %p\n", old_brk);

    return 0;
}
