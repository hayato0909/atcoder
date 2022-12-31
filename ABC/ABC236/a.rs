use proconio::input;

fn main() {
    input!{
        mut s: String,
        a: usize,
        b: usize,
    }

    let mut tmp: Vec<char> = s.chars().collect();
    tmp.swap(a-1, b-1);
    let ans: String = tmp.iter().collect();
    println!("{}", ans);
}