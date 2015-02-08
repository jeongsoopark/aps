if &cp | set nocp | endif
let s:cpo_save=&cpo
set cpo&vim
imap <BS> <Left><Del>
nnoremap  
nnoremap <NL> <NL>
nnoremap  
nnoremap  
nmap gx <Plug>NetrwBrowseX
nnoremap <silent> <Plug>NetrwBrowseX :call netrw#NetrwBrowseX(expand("<cWORD>"),0)
map <F6> :%s/=expand('<cword>')/&/gn
map <F5> :windo e!
map <F4> :tabclose
map <F3> :NERDTreeToggle
map <F2> :call ToggleNuMode()
inoremap <expr>  omni#cpp#maycomplete#Complete()
inoremap <expr> . omni#cpp#maycomplete#Dot()
inoremap <expr> : omni#cpp#maycomplete#Scope()
inoremap <expr> > omni#cpp#maycomplete#Arrow()
let &cpo=s:cpo_save
unlet s:cpo_save
set autochdir
set autoindent
set background=dark
set backspace=indent,eol,start
set cindent
set comments=sl:/*,mb:**,elx:*/
set completeopt=menuone,longest,preview
set expandtab
set fileencodings=utf-8,euc-kr
set guicursor=n-v-c:block,o:hor50,i-ci:hor15,r-cr:hor30,sm:block,a:blinkon0
set helplang=ko
set hlsearch
set incsearch
set laststatus=2
set matchpairs=(:),{:},[:],<:>
set omnifunc=omni#cpp#complete#Main
set ruler
set shiftwidth=2
set showcmd
set showmatch
set smartindent
set softtabstop=2
set nostartofline
set statusline=%<%F%h%m%r%h%w%y\ %{strftime(\"%Y/%m/%d-%H:%M\")}%=\ col:%c%V\ ascii:%b\ pos:%o\ lin:%l,%L\ %P
set tabstop=2
set tags=./tags,./TAGS,tags,TAGS,./tags;,~/.vim/tags/cpp
set window=49
" vim: set ft=vim :
