# Shell Programming


Bu proje üç programdan oluşmaktadır. Ana program “accountant” ismindedir. Bu program yapılacak
işlemleri yönetmektedir. “accountant” komutlar ve parametrelerle çalışmaktadır. Aşağıda “accountant”
Kabul ettiği komutlar ve parametreler gösterilmektedir.
* insert:
* önüne yazılan tüm parametler pozitif sayıdır
* Komut çağırıldığında önünde yazılan parametreleri “inserter” isimli programa gönderir.
* “inserter” programı gelen parametleri “database.txt” isimli dosyaya sonradan eklemeli olarak kaydeder.
* Bu işlem için “inserter” isimli bir program yazılmalı ve ana programdan fork ile çağırılmadır.
* Sonuç değeri exit içinde döndürülebilir.
* Negatif değerler hata durumları içindir.
* calculate:
* önüne bir karakter ve iki rakam alır.
* Eğer önünde alabileceği karakterler “-s”(single),“-r”(range)
* Gelen parametreleri “calc” isimli programa gönderir.
* “calc” isimli program “database.txt” isimli dosyadan sayılar okuyup toplamaktadır.
* Bu komut eğer önünde “-s” varsa önündeki “database.txt” isimli dosyadan iki sayının indexinde bulunan iki sayıyı toplar.
* Eğer önünde “-r” varsa “database.txt” isimli dosyadan iki sayı indeksi arasında bulunan tüm sayıları toplar.
* Eğer index rakamları aşılmış ya da bir hata durumunda program hata döndürür.
* Bu işlem için “calculate” isimli bir program yazılmalı ve ana programdan fork ile çağırılmadır.
* Sonuç değeri exit içinde döndürülebilir.
* Negatif değerler hata durumları içindir.
* readall: “database.txt” dosyasının tamamını ekrana yazdırır (cat programı çağırılabilir(komut değil programı)).
* clear: ekranı temizler
* exit :programdan çıkar.
