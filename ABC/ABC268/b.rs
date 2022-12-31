use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        s: Chars,
        t: Chars,
    }

    let mut flag: bool = true;
    let mut idx = 0;

    if s.len() > t.len() {
        flag = false;
    } else {
        for i in 0..s.len() {
            if s[idx] != t[idx] {
                flag = false;
            }
            idx += 1;
        }
    }

    if flag {
        println!("Yes");
    } else {
        println!("No");
    }
}