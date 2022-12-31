use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;

fn main() {
    input!{
        n: usize,
        k: usize,
        a: [i32; n],
        b: [i32; k],
    }

    let mut v: i32 = 0;
    for i in 0..n {
        if v < a[i] {
            v = a[i];
        }
    }

    for i in 0..n {
        if a[i] != v {continue}
        for j in 0..k {
            if b[j] == i as i32 + 1 {
                println!("Yes");
                return;
            }
        }
    }
    println!("No");
}