use proconio::input;
use std::cmp::max;
use std::cmp::min;

fn main() {
    input!{
        s: String,
    }

    let s_tmp: Vec<char> = s.chars().collect();

    let mut ans: i32 = -1;

    for i in 0..s_tmp.len() {
        if s_tmp[i] == 'a' {ans = i as i32 + 1}
    }
    println!("{}", ans);
}