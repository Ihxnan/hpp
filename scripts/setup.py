#!/usr/bin/env python3

import os
import sys
from pathlib import Path

if os.geteuid() != 0:
    print("错误: 此脚本需要管理员 (root) 权限才能写入到 /usr/local/include。")
    print(f"请使用 sudo 运行，例如: sudo {sys.argv[0]}")
    sys.exit(1)

dest_dir = Path("/usr/local/include/")

script_path = Path(__file__).resolve()
src_dir = script_path.parent.parent / "headers"

for src_path in src_dir.iterdir():

    dest_path = dest_dir / src_path.name

    if dest_path.exists() or dest_path.is_symlink():
        print(f"  - 目标 {dest_path} 已存在， 将先删除...")
        dest_path.unlink()

    os.symlink(src_path, dest_path)
