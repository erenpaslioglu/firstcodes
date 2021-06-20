clc
clear all

N = 10^5;
A = 0;  %Monte carlo simülasyonunda kullanmak üzere değer tanımladık.
B = 0;  %Monte carlo simülasyonunda kullanmak üzere değer tanımladık.
maks = 0;
f = 0;
while N > 0 %Döngünün sonlanması için kriterimiz
    A = A + rand; %Monte carlo simülasyonunu gerçekleştirebilmek için rastgele sayı ekliyoruz.
    B = B + 1;
    if A > 1  
        if B > maks 
            f(B) = 1;
            maks = B;
        else
            f(B) = f(B) + 1;
        end
        B = 0;
        A = 0;
        N = N - 1;
    end
end
f/sum(f)
plot(f/sum(f)) %Simülasyonun adım ve değer grafiği
e=(1:maks)*f'/sum(f); %Euler sayısı yakınsama değeri
fprintf("Euler sayısı yakınsama değerimiz: %f",e)
fprintf("\nYakınsamadaki hata payı: %f",abs(exp(1)-e))

