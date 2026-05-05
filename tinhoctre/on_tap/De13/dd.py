import pygetwindow as gw
import time
import os
import ctypes

# Tên chính xác trên Profile của ông
TARGET = "Khoa thích lập trình"

def monitor_title():
    print(f"He thong dang quet cua so chua chu: '{TARGET}'...")
    
    while True:
        # Lay tat ca cac cua so dang hien thi tren man hinh
        windows = gw.getWindowsWithTitle(TARGET)
        
        if windows:
            # Neu tim thay it nhat 1 cua so co ten ong
            for win in windows:
                title = win.title
                if TARGET in title:
                    print(f"[!] Canh bao: Phat hien truy cap vao {title}")
                    
                    # Ghi log am tham vao o D cho chac
                    with open("D:/guard_log.txt", "a", encoding="utf-8") as f:
                        f.write(f"{time.ctime()}: Xam nhap vao {title}\n")
                    
                    # Hien thong bao Windows (dung ctypes cho do ton tai nguyen)
                    ctypes.windll.user32.MessageBoxW(0, 
                        f"User '{TARGET}' dang duoc giam sat.\nHanh dong nay da bi ghi lai!", 
                        "System Guard", 0x30 | 0x0)
                    
                    # Neu muon manh tay, sau khi no bam OK thi shutdown may luon
                    # os.system("shutdown /s /t 5")
                    
                    # De tranh bi lap lai canh bao lien tuc khi cua so van mo
                    time.sleep(10) 
        
        time.sleep(2) # Quet moi 2 giay

if __name__ == "__main__":
    monitor_title()