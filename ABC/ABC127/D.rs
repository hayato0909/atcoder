use proconio::input;

fn main() {
    input!{
        n: usize,
        m: usize,
        mut a:[i32;n],
        b: [[i32; 2];m],
    }

    let mut v: Vec<(i32, i32)> = Vec::new();
    for i in 0..m {
        v.push((b[i][1], b[i][0]));
    }
    v.sort();
    v.reverse();
    a.sort();
    let mut j: usize = 0;
    let mut num: usize = 0;
    for i in 0..n {
        if num as i32 >= v[j].1 {
            j += 1;
            num = 0;
        }
        if j >= m {
            break;
        }
        if a[i] < v[j].0 {
            a[i] = v[j].0;
            num += 1;
        }
    }
    let mut ans: i64 = 0;
    for i in 0..n {
        ans += a[i] as i64;
    }
    println!("{}", ans);
}