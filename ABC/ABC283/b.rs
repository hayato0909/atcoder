use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;

fn main() {
    input!{
        n: usize,
        mut a: [i32; n],
        q: usize,
    }

    for i in 0..q {
        input!{
            mode: usize,
        }
        if mode == 1 {
            input!{
                k: usize,
                x: i32,
            }
            a[k-1] = x;
        } else {
            input!{
                k: usize,
            }
            println!("{}", a[k-1]);
        }
    }
}