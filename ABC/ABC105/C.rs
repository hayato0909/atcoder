use proconio::input;
// use superslice::Ext;
// use std::cmp::max;
// use std::cmp::min;

fn main() {
    input! {
        mut n: i32,
    }
    let mut ans: String = String::from("");
    if n == 0 {
        println!("0");
        return;
    }

    while n != 1 {
        if n % 2 == 0 {
            ans += "0";
        } else {
            ans += "1";
        }
        if n < 0 {
            n = -n;
            n = (n + 1) / 2;
        } else {
            n = n / 2;
            n = -n;
        }
    }
    ans += "1";
    let revans = ans.chars().rev().collect::<String>();
    println!("{}", revans);
}