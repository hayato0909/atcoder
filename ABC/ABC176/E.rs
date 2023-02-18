use proconio::input;
use superslice::Ext;
// use std::cmp::max;
// use std::cmp::min;
// use petgraph::unionfind::UnionFind;

fn main() {
    input! {
        h: usize, 
        w: usize, 
        m: usize,
        mut hw: [(usize, usize); m],
    }

    hw.sort();
    let mut sumh = vec![0; h];
    let mut sumw = vec![0; w];
    for i in &hw {
        sumh[i.0-1] += 1;
        sumw[i.1-1] += 1;
    }
    let mut maxh = 0;
    for i in 0..h {
        if maxh < sumh[i] {
            maxh = sumh[i];
        }
    }
    let mut maxw = 0;
    for i in 0..w {
        if maxw < sumw[i] {
            maxw = sumw[i];
        }
    }

    let mut indexh: Vec<usize> = Vec::new();
    let mut indexw: Vec<usize> = Vec::new();
    for i in 0..h {
        if sumh[i] == maxh {
            indexh.push(i);
        }
    }
    for i in 0..w {
        if sumw[i] == maxw {
            indexw.push(i);
        }
    }
    
    for i in &indexh {
        for j in &indexw {
            let idx = hw.lower_bound(&(i+1, j+1));
            if !(idx < m && hw[idx].0 == i + 1 && hw[idx].1 == j + 1) {
                println!("{}", maxh+maxw);
                return;
            }
        }
    }
    println!("{}", maxh+maxw-1);

}

