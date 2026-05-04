import random

def create_test(n, max_val, filename="SAME.INP"):
    with open(filename, "w") as f:
        f.write(f"{n}\n")
        # Tạo n số ngẫu nhiên
        data = [str(random.randint(1, max_val)) for _ in range(n)]
        f.write(" ".join(data))
    print(f"Da tao xong file {filename} voi {n} phan tu.")

# Chạy tạo test cực đại
create_test(100, 1000000)