use proconio::input;
use std::cmp::*;
use proconio::marker::Chars;

fn main() {
    input!{
        h: usize,
        w: usize,
        s: [Chars; h],
    }

    let mut x1: i32 = -1;
    let mut x2: i32 = -1;
    let mut y1: i32 = -1;
    let mut y2: i32 = -1;

    for i in 0..h {
        for j in 0..w {
            if s[i][j] == 'o' {
                if x1 == -1 {
                    x1 = i as i32;
                    y1 = j as i32;
                } else {
                    x2 = i as i32;
                    y2 = j as i32;
                }
            }
        }
    }

    let ans = (x1 - x2).abs() + (y1 - y2).abs();
    println!("{}", ans);
}