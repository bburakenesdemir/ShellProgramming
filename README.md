# ShellProgramming
Includes thread sync, pipelining, fork and exec system calls 
Bu proje üç programdan oluşmaktadır. Ana program “accountant” ismindedir. Bu program yapılacak
işlemleri yönetmektedir. “accountant” komutlar ve parametrelerle çalışmaktadır. Aşağıda “accountant”
Kabul ettiği komutlar ve parametreler gösterilmektedir.
 insert:
o önüne yazılan tüm parametler pozitif sayıdır
o Komut çağırıldığında önünde yazılan parametreleri “inserter” isimli programa gönderir.
o “inserter” programı gelen parametleri “database.txt” isimli dosyaya sonradan eklemeli
olarak kaydeder.
o Bu işlem için “inserter” isimli bir program yazılmalı ve ana programdan fork ile çağırılmadır.
o Sonuç değeri exit içinde döndürülebilir.
o Negatif değerler hata durumları içindir.
 calculate:
o önüne bir karakter ve iki rakam alır.
o Eğer önünde alabileceği karakterler “-s”(single),“-r”(range)
o Gelen parametreleri “calc” isimli programa gönderir.
o “calc” isimli program “database.txt” isimli dosyadan sayılar okuyup toplamaktadır.
o Bu komut eğer önünde “-s” varsa önündeki “database.txt” isimli dosyadan iki sayının
indexinde bulunan iki sayıyı toplar.
o Eğer önünde “-r” varsa “database.txt” isimli dosyadan iki sayı indeksi arasında bulunan tüm
sayıları toplar.
o Eğer index rakamları aşılmış ya da bir hata durumunda program hata döndürür.
o Bu işlem için “calculate” isimli bir program yazılmalı ve ana programdan fork ile çağırılmadır.
o Sonuç değeri exit içinde döndürülebilir.
o Negatif değerler hata durumları içindir.
 readall: “database.txt” dosyasının tamamını ekrana yazdırır (cat programı çağırılabilir(komut değil
programı)).
 clear: ekranı temizler
 exit :programdan çıkar.
