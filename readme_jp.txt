Tiny Depth for Arduboy

■転送方法
windows版「Arduino IDE」の付属ツールを使って転送します。

このフォルダにある「test.bat」をテキストエディタで開いて
VAL1〜VAL4（2行目〜5行目）を環境に合わせて修正してください。

ArduboyをUSB接続して「test.bat」を実行すれば転送されます。


■遊び方
左ボタン　左に移動
右ボタン　右に移動
Ａボタン　機雷投下、決定


■開発環境
・windows8.1 pro
・Arduino IDE 1.6.8
・Arduino IDE 1.0.6(make.exeのみ使用)

最新のIDEにはmake.exeが入っていない為、古いバージョンからパクってきています。
ツール類は以下のものを使っていました。

Visual Studio 2015 C#
python 2.7 + pil


■MIDIデータ
無断なのでちょっと怖いですけど。（＾＾；
こーねさんのホームページから使わせていただきました。
http://www.geocities.co.jp/Hollywood-Kouen/9343/music.html


■ライセンス
GPL v2


■履歴
v1.03 2016/07/12    AボタンとBボタンの間違いを修正
v1.02 2016/05/17    Arduboy 1.0とosxスクリプトを追加
v1.01 2016/02/23    64bitパソコンでresetできない問題を修正
v1.00 2015/12/25    とりあえず完成





Arduboy 1.0
めも

AVR Memory Usage
----------------
Device: atmega32u4

Program:   17730 bytes (54.1% Full)
(.text + .data + .bootloader)

Data:       1589 bytes (62.1% Full)
(.data + .bss + .noinit)
