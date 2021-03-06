static const uint8_t fs_rayBundleIntegrate_gl[5044] =
{
	0x46, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa1, 0x13, // FSH.............
	0x00, 0x00, 0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x34, 0x33, 0x30, 0x0a, 0x23, // ..#version 430.#
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, // define texture2D
	0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // Lod      texture
	0x4c, 0x6f, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, // Lod.#define text
	0x75, 0x72, 0x65, 0x32, 0x44, 0x47, 0x72, 0x61, 0x64, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, // ure2DGrad     te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x47, 0x72, 0x61, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, // xtureGrad.#defin
	0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x50, 0x72, 0x6f, 0x6a, 0x4c, // e texture2DProjL
	0x6f, 0x64, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x50, 0x72, 0x6f, 0x6a, 0x4c, // od  textureProjL
	0x6f, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, // od.#define textu
	0x72, 0x65, 0x32, 0x44, 0x50, 0x72, 0x6f, 0x6a, 0x47, 0x72, 0x61, 0x64, 0x20, 0x74, 0x65, 0x78, // re2DProjGrad tex
	0x74, 0x75, 0x72, 0x65, 0x50, 0x72, 0x6f, 0x6a, 0x47, 0x72, 0x61, 0x64, 0x0a, 0x23, 0x64, 0x65, // tureProjGrad.#de
	0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, // fine textureCube
	0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x4c, 0x6f, // Lod    textureLo
	0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // d.#define textur
	0x65, 0x43, 0x75, 0x62, 0x65, 0x47, 0x72, 0x61, 0x64, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, // eCubeGrad   text
	0x75, 0x72, 0x65, 0x47, 0x72, 0x61, 0x64, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, // ureGrad.#define 
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x33, 0x44, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // texture3D       
	0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, //   texture.#defin
	0x65, 0x20, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x69, 0x6e, 0x0a, 0x23, // e attribute in.#
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x69, // define varying i
	0x6e, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x62, 0x67, 0x66, 0x78, 0x53, 0x68, // n.#define bgfxSh
	0x61, 0x64, 0x6f, 0x77, 0x32, 0x44, 0x28, 0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, // adow2D(_sampler,
	0x20, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x20, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, //  _coord)     vec
	0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, // 4_splat(texture(
	0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, // _sampler, _coord
	0x29, 0x29, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x62, 0x67, 0x66, 0x78, 0x53, // )).#define bgfxS
	0x68, 0x61, 0x64, 0x6f, 0x77, 0x32, 0x44, 0x50, 0x72, 0x6f, 0x6a, 0x28, 0x5f, 0x73, 0x61, 0x6d, // hadow2DProj(_sam
	0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x20, 0x76, 0x65, // pler, _coord) ve
	0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // c4_splat(texture
	0x50, 0x72, 0x6f, 0x6a, 0x28, 0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x5f, // Proj(_sampler, _
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x29, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x69, 0x6e, 0x73, // coord)).vec3 ins
	0x74, 0x4d, 0x75, 0x6c, 0x28, 0x76, 0x65, 0x63, 0x33, 0x20, 0x5f, 0x76, 0x65, 0x63, 0x2c, 0x20, // tMul(vec3 _vec, 
	0x6d, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, // mat3 _mtx) { ret
	0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x2a, 0x20, 0x28, // urn ( (_vec) * (
	0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, // _mtx) ); }.vec3 
	0x69, 0x6e, 0x73, 0x74, 0x4d, 0x75, 0x6c, 0x28, 0x6d, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x6d, 0x74, // instMul(mat3 _mt
	0x78, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x7b, 0x20, // x, vec3 _vec) { 
	0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, // return ( (_mtx) 
	0x2a, 0x20, 0x28, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, // * (_vec) ); }.ve
	0x63, 0x34, 0x20, 0x69, 0x6e, 0x73, 0x74, 0x4d, 0x75, 0x6c, 0x28, 0x76, 0x65, 0x63, 0x34, 0x20, // c4 instMul(vec4 
	0x5f, 0x76, 0x65, 0x63, 0x2c, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x6d, 0x74, 0x78, 0x29, // _vec, mat4 _mtx)
	0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, 0x5f, 0x76, 0x65, //  { return ( (_ve
	0x63, 0x29, 0x20, 0x2a, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x29, 0x3b, 0x20, 0x7d, // c) * (_mtx) ); }
	0x0a, 0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x6e, 0x73, 0x74, 0x4d, 0x75, 0x6c, 0x28, 0x6d, 0x61, // .vec4 instMul(ma
	0x74, 0x34, 0x20, 0x5f, 0x6d, 0x74, 0x78, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x76, // t4 _mtx, vec4 _v
	0x65, 0x63, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28, 0x20, 0x28, // ec) { return ( (
	0x5f, 0x6d, 0x74, 0x78, 0x29, 0x20, 0x2a, 0x20, 0x28, 0x5f, 0x76, 0x65, 0x63, 0x29, 0x20, 0x29, // _mtx) * (_vec) )
	0x3b, 0x20, 0x7d, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x72, 0x63, 0x70, 0x28, 0x66, 0x6c, // ; }.float rcp(fl
	0x6f, 0x61, 0x74, 0x20, 0x5f, 0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, // oat _a) { return
	0x20, 0x31, 0x2e, 0x30, 0x2f, 0x5f, 0x61, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x32, 0x20, //  1.0/_a; }.vec2 
	0x72, 0x63, 0x70, 0x28, 0x76, 0x65, 0x63, 0x32, 0x20, 0x5f, 0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, // rcp(vec2 _a) { r
	0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x31, 0x2e, 0x30, 0x29, 0x2f, // eturn vec2(1.0)/
	0x5f, 0x61, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x72, 0x63, 0x70, 0x28, 0x76, // _a; }.vec3 rcp(v
	0x65, 0x63, 0x33, 0x20, 0x5f, 0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, // ec3 _a) { return
	0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, 0x2e, 0x30, 0x29, 0x2f, 0x5f, 0x61, 0x3b, 0x20, 0x7d, //  vec3(1.0)/_a; }
	0x0a, 0x76, 0x65, 0x63, 0x34, 0x20, 0x72, 0x63, 0x70, 0x28, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, // .vec4 rcp(vec4 _
	0x61, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, // a) { return vec4
	0x28, 0x31, 0x2e, 0x30, 0x29, 0x2f, 0x5f, 0x61, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x32, // (1.0)/_a; }.vec2
	0x20, 0x76, 0x65, 0x63, 0x32, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, 0x6c, 0x6f, 0x61, //  vec2_splat(floa
	0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, // t _x) { return v
	0x65, 0x63, 0x32, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, // ec2(_x, _x); }.v
	0x65, 0x63, 0x33, 0x20, 0x76, 0x65, 0x63, 0x33, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, // ec3 vec3_splat(f
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, // loat _x) { retur
	0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, // n vec3(_x, _x, _
	0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x65, 0x63, 0x34, 0x5f, // x); }.vec4 vec4_
	0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, // splat(float _x) 
	0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x5f, 0x78, // { return vec4(_x
	0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, // , _x, _x, _x); }
	0x0a, 0x75, 0x76, 0x65, 0x63, 0x32, 0x20, 0x75, 0x76, 0x65, 0x63, 0x32, 0x5f, 0x73, 0x70, 0x6c, // .uvec2 uvec2_spl
	0x61, 0x74, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, // at(uint _x) { re
	0x74, 0x75, 0x72, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x32, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, // turn uvec2(_x, _
	0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x75, 0x76, 0x65, 0x63, 0x33, 0x20, 0x75, 0x76, 0x65, 0x63, // x); }.uvec3 uvec
	0x33, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x78, 0x29, // 3_splat(uint _x)
	0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x33, 0x28, //  { return uvec3(
	0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x75, // _x, _x, _x); }.u
	0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x76, 0x65, 0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, // vec4 uvec4_splat
	0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x78, 0x29, 0x20, 0x7b, 0x20, 0x72, 0x65, 0x74, 0x75, // (uint _x) { retu
	0x72, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x34, 0x28, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x2c, // rn uvec4(_x, _x,
	0x20, 0x5f, 0x78, 0x2c, 0x20, 0x5f, 0x78, 0x29, 0x3b, 0x20, 0x7d, 0x0a, 0x6d, 0x61, 0x74, 0x34, //  _x, _x); }.mat4
	0x20, 0x6d, 0x74, 0x78, 0x46, 0x72, 0x6f, 0x6d, 0x52, 0x6f, 0x77, 0x73, 0x28, 0x76, 0x65, 0x63, //  mtxFromRows(vec
	0x34, 0x20, 0x5f, 0x30, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x31, 0x2c, 0x20, 0x76, // 4 _0, vec4 _1, v
	0x65, 0x63, 0x34, 0x20, 0x5f, 0x32, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x33, 0x29, // ec4 _2, vec4 _3)
	0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x70, // .{.return transp
	0x6f, 0x73, 0x65, 0x28, 0x6d, 0x61, 0x74, 0x34, 0x28, 0x5f, 0x30, 0x2c, 0x20, 0x5f, 0x31, 0x2c, // ose(mat4(_0, _1,
	0x20, 0x5f, 0x32, 0x2c, 0x20, 0x5f, 0x33, 0x29, 0x20, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x6d, 0x61, //  _2, _3) );.}.ma
	0x74, 0x34, 0x20, 0x6d, 0x74, 0x78, 0x46, 0x72, 0x6f, 0x6d, 0x43, 0x6f, 0x6c, 0x73, 0x28, 0x76, // t4 mtxFromCols(v
	0x65, 0x63, 0x34, 0x20, 0x5f, 0x30, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x31, 0x2c, // ec4 _0, vec4 _1,
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x32, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, //  vec4 _2, vec4 _
	0x33, 0x29, 0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6d, 0x61, 0x74, 0x34, // 3).{.return mat4
	0x28, 0x5f, 0x30, 0x2c, 0x20, 0x5f, 0x31, 0x2c, 0x20, 0x5f, 0x32, 0x2c, 0x20, 0x5f, 0x33, 0x29, // (_0, _1, _2, _3)
	0x3b, 0x0a, 0x7d, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, // ;.}.uniform vec4
	0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x3b, 0x0a, 0x75, 0x6e, 0x69, //  u_viewRect;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // form vec4 u_view
	0x54, 0x65, 0x78, 0x65, 0x6c, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, // Texel;.uniform m
	0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, // at4 u_view;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, // orm mat4 u_invVi
	0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, // ew;.uniform mat4
	0x20, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, //  u_proj;.uniform
	0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x3b, //  mat4 u_invProj;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, // .uniform mat4 u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // viewProj;.unifor
	0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, // m mat4 u_invView
	0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, // Proj;.uniform ma
	0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, // t4 u_model[32];.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, // uniform mat4 u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // odelView;.unifor
	0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, // m mat4 u_modelVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // ewProj;.uniform 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, // vec4 u_alphaRef4
	0x3b, 0x0a, 0x6c, 0x61, 0x79, 0x6f, 0x75, 0x74, 0x28, 0x72, 0x33, 0x32, 0x75, 0x69, 0x2c, 0x20, // ;.layout(r32ui, 
	0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x3d, 0x34, 0x29, 0x20, 0x72, 0x65, 0x61, 0x64, 0x6f, // binding=4) reado
	0x6e, 0x6c, 0x79, 0x20, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x75, 0x69, 0x6d, 0x61, // nly uniform uima
	0x67, 0x65, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, // ge2D u_rayBundle
	0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x6c, // HeaderSampler;.l
	0x61, 0x79, 0x6f, 0x75, 0x74, 0x28, 0x72, 0x67, 0x62, 0x61, 0x33, 0x32, 0x75, 0x69, 0x2c, 0x20, // ayout(rgba32ui, 
	0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x3d, 0x35, 0x29, 0x20, 0x72, 0x65, 0x61, 0x64, 0x6f, // binding=5) reado
	0x6e, 0x6c, 0x79, 0x20, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x75, 0x69, 0x6d, 0x61, // nly uniform uima
	0x67, 0x65, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, // ge2D u_rayBundle
	0x44, 0x61, 0x74, 0x61, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x6c, 0x61, 0x79, // DataSampler;.lay
	0x6f, 0x75, 0x74, 0x28, 0x72, 0x33, 0x32, 0x75, 0x69, 0x2c, 0x20, 0x62, 0x69, 0x6e, 0x64, 0x69, // out(r32ui, bindi
	0x6e, 0x67, 0x3d, 0x36, 0x29, 0x20, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x75, 0x69, // ng=6) uniform ui
	0x6d, 0x61, 0x67, 0x65, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, // mage2D u_rayBund
	0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // leLightmapSample
	0x72, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // r;.uniform vec4 
	0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, // u_lightmapSize_d
	0x61, 0x74, 0x61, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // ataSize;.uniform
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, //  vec4 u_rayNorma
	0x6c, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // l;.uniform vec4 
	0x75, 0x5f, 0x73, 0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, 0x62, 0x6c, // u_skyColor_enabl
	0x65, 0x64, 0x3b, 0x0a, 0x69, 0x76, 0x65, 0x63, 0x32, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, // ed;.ivec2 rayBun
	0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x6f, // dleDataUv(uint o
	0x66, 0x66, 0x73, 0x65, 0x74, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x70, 0x69, 0x78, 0x65, // ffset, uint pixe
	0x6c, 0x29, 0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x69, 0x76, 0x65, 0x63, // l).{.return ivec
	0x32, 0x28, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x2a, 0x20, 0x33, 0x75, 0x20, 0x2b, // 2((offset * 3u +
	0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x29, 0x20, 0x25, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, //  pixel) % uint(u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, // _lightmapSize_da
	0x74, 0x61, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x7a, 0x29, 0x2c, 0x20, 0x28, 0x6f, 0x66, 0x66, 0x73, // taSize.z), (offs
	0x65, 0x74, 0x20, 0x2a, 0x20, 0x33, 0x75, 0x20, 0x2b, 0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x29, // et * 3u + pixel)
	0x20, 0x2f, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x6d, //  / uint(u_lightm
	0x61, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x53, 0x69, 0x7a, 0x65, 0x2e, // apSize_dataSize.
	0x7a, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x69, 0x76, 0x65, 0x63, 0x32, 0x20, 0x72, 0x61, 0x79, // z));.}.ivec2 ray
	0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, // BundleLightmapDa
	0x74, 0x61, 0x55, 0x76, 0x28, 0x76, 0x65, 0x63, 0x32, 0x20, 0x75, 0x76, 0x2c, 0x20, 0x75, 0x69, // taUv(vec2 uv, ui
	0x6e, 0x74, 0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x29, 0x0a, 0x7b, 0x0a, 0x72, 0x65, 0x74, 0x75, // nt pixel).{.retu
	0x72, 0x6e, 0x20, 0x69, 0x76, 0x65, 0x63, 0x32, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x76, // rn ivec2(uint(uv
	0x2e, 0x78, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, // .x * u_lightmapS
	0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x78, 0x79, 0x2e, // ize_dataSize.xy.
	0x78, 0x29, 0x20, 0x2a, 0x20, 0x34, 0x75, 0x20, 0x2b, 0x20, 0x70, 0x69, 0x78, 0x65, 0x6c, 0x2c, // x) * 4u + pixel,
	0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x76, 0x2e, 0x79, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6c, //  uint(uv.y * u_l
	0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x5f, 0x64, 0x61, 0x74, 0x61, // ightmapSize_data
	0x53, 0x69, 0x7a, 0x65, 0x2e, 0x78, 0x79, 0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x73, // Size.xy.y));.}.s
	0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x4e, 0x6f, 0x64, 0x65, 0x0a, 0x7b, 0x0a, 0x76, 0x65, 0x63, // truct Node.{.vec
	0x33, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, // 3 color;.float d
	0x65, 0x70, 0x74, 0x68, 0x3b, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // epth;.vec3 norma
	0x6c, 0x3b, 0x0a, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // l;.vec2 texcoord
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x29, // ;.};.void main()
	0x0a, 0x7b, 0x0a, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x3d, // .{.uint offset =
	0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x61, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, //  imageLoad(u_ray
	0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x53, 0x61, 0x6d, 0x70, // BundleHeaderSamp
	0x6c, 0x65, 0x72, 0x2c, 0x20, 0x69, 0x76, 0x65, 0x63, 0x32, 0x28, 0x67, 0x6c, 0x5f, 0x46, 0x72, // ler, ivec2(gl_Fr
	0x61, 0x67, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x78, 0x79, 0x29, 0x29, 0x2e, 0x78, 0x3b, 0x0a, // agCoord.xy)).x;.
	0x69, 0x66, 0x20, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x21, 0x3d, 0x20, 0x30, 0x78, // if (offset != 0x
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x29, 0x20, 0x7b, 0x0a, 0x4e, 0x6f, 0x64, 0x65, // ffffffff) {.Node
	0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x36, 0x34, 0x5d, 0x3b, 0x0a, 0x75, 0x69, 0x6e, 0x74, //  nodes[64];.uint
	0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x3d, 0x20, 0x30, 0x75, 0x3b, 0x0a, //  numNodes = 0u;.
	0x77, 0x68, 0x69, 0x6c, 0x65, 0x20, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x21, 0x3d, // while (offset !=
	0x20, 0x30, 0x78, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x20, 0x26, 0x26, 0x20, 0x6e, //  0xffffffff && n
	0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x3c, 0x20, 0x36, 0x34, 0x29, 0x20, 0x7b, 0x0a, // umNodes < 64) {.
	0x75, 0x76, 0x65, 0x63, 0x34, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x73, // uvec4 color_offs
	0x65, 0x74, 0x20, 0x3d, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x61, 0x64, 0x28, 0x75, // et = imageLoad(u
	0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x53, 0x61, // _rayBundleDataSa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, // mpler, rayBundle
	0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2c, 0x20, 0x30, // DataUv(offset, 0
	0x75, 0x29, 0x29, 0x3b, 0x0a, 0x75, 0x76, 0x65, 0x63, 0x34, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // u));.uvec4 norma
	0x6c, 0x5f, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, // l_depth = imageL
	0x6f, 0x61, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, // oad(u_rayBundleD
	0x61, 0x74, 0x61, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, // ataSampler, rayB
	0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x6f, 0x66, 0x66, 0x73, // undleDataUv(offs
	0x65, 0x74, 0x2c, 0x20, 0x31, 0x75, 0x29, 0x29, 0x3b, 0x0a, 0x75, 0x76, 0x65, 0x63, 0x34, 0x20, // et, 1u));.uvec4 
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x3d, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, // texcoord = image
	0x4c, 0x6f, 0x61, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, // Load(u_rayBundle
	0x44, 0x61, 0x74, 0x61, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, // DataSampler, ray
	0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x6f, 0x66, 0x66, // BundleDataUv(off
	0x73, 0x65, 0x74, 0x2c, 0x20, 0x32, 0x75, 0x29, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, // set, 2u));.nodes
	0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // [numNodes].color
	0x2e, 0x72, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, // .r = uintBitsToF
	0x6c, 0x6f, 0x61, 0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, // loat(color_offse
	0x74, 0x2e, 0x72, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, // t.r);.nodes[numN
	0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x67, 0x20, 0x3d, 0x20, // odes].color.g = 
	0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, // uintBitsToFloat(
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2e, 0x67, 0x29, 0x3b, // color_offset.g);
	0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, // .nodes[numNodes]
	0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x62, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, // .color.b = uintB
	0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // itsToFloat(color
	0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2e, 0x62, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, // _offset.b);.node
	0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, // s[numNodes].norm
	0x61, 0x6c, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, // al.x = uintBitsT
	0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, 0x65, // oFloat(normal_de
	0x70, 0x74, 0x68, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, // pth.x);.nodes[nu
	0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x79, // mNodes].normal.y
	0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, //  = uintBitsToFlo
	0x61, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, 0x65, 0x70, 0x74, 0x68, 0x2e, // at(normal_depth.
	0x79, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, // y);.nodes[numNod
	0x65, 0x73, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x75, // es].normal.z = u
	0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6e, // intBitsToFloat(n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, 0x65, 0x70, 0x74, 0x68, 0x2e, 0x7a, 0x29, 0x3b, 0x0a, // ormal_depth.z);.
	0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, // nodes[numNodes].
	0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, // depth = uintBits
	0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x64, // ToFloat(normal_d
	0x65, 0x70, 0x74, 0x68, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, // epth.w);.nodes[n
	0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x5d, 0x2e, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // umNodes].texcoor
	0x64, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, // d = vec2(uintBit
	0x73, 0x54, 0x6f, 0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // sToFloat(texcoor
	0x64, 0x2e, 0x78, 0x29, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x42, 0x69, 0x74, 0x73, 0x54, 0x6f, // d.x), uintBitsTo
	0x46, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x79, // Float(texcoord.y
	0x29, 0x29, 0x3b, 0x0a, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6c, // ));.offset = col
	0x6f, 0x72, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x2e, 0x77, 0x3b, 0x0a, 0x6e, 0x75, 0x6d, // or_offset.w;.num
	0x4e, 0x6f, 0x64, 0x65, 0x73, 0x2b, 0x2b, 0x3b, 0x0a, 0x7d, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, // Nodes++;.}.vec3 
	0x6e, 0x6f, 0x64, 0x65, 0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x36, 0x34, 0x5d, // nodeRadiance[64]
	0x3b, 0x0a, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x69, 0x20, 0x3d, 0x20, // ;.for (uint i = 
	0x30, 0x75, 0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, // 0u; i < numNodes
	0x3b, 0x20, 0x69, 0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0a, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x75, 0x69, // ; i++) {.for (ui
	0x6e, 0x74, 0x20, 0x6a, 0x20, 0x3d, 0x20, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x3b, 0x20, 0x6a, // nt j = i + 1u; j
	0x20, 0x3c, 0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x3b, 0x20, 0x6a, 0x2b, 0x2b, //  < numNodes; j++
	0x29, 0x20, 0x7b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x5d, // ) {.if (nodes[i]
	0x2e, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x3e, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6a, // .depth > nodes[j
	0x5d, 0x2e, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x7c, 0x7c, 0x20, 0x28, 0x6e, 0x6f, 0x64, 0x65, // ].depth || (node
	0x73, 0x5b, 0x69, 0x5d, 0x2e, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x3d, 0x3d, 0x20, 0x6e, 0x6f, // s[i].depth == no
	0x64, 0x65, 0x73, 0x5b, 0x6a, 0x5d, 0x2e, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x26, 0x26, 0x20, // des[j].depth && 
	0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, // dot(nodes[i].nor
	0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // mal, u_rayNormal
	0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, // .xyz) > 0.0)) {.
	0x4e, 0x6f, 0x64, 0x65, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x64, 0x65, // Node temp = node
	0x73, 0x5b, 0x69, 0x5d, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x5d, 0x20, 0x3d, // s[i];.nodes[i] =
	0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6a, 0x5d, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x73, //  nodes[j];.nodes
	0x5b, 0x6a, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x3b, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, // [j] = temp;.}.}.
	0x6e, 0x6f, 0x64, 0x65, 0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x69, 0x5d, 0x20, // nodeRadiance[i] 
	0x3d, 0x20, 0x76, 0x65, 0x63, 0x33, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, 0x30, 0x2e, 0x30, // = vec3_splat(0.0
	0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, // );.}.if (numNode
	0x73, 0x20, 0x3e, 0x3d, 0x20, 0x32, 0x75, 0x29, 0x20, 0x7b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, // s >= 2u) {.float
	0x20, 0x62, 0x72, 0x64, 0x66, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x66, 0x6f, 0x72, //  brdf = 1.0;.for
	0x20, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x69, 0x20, 0x3d, 0x20, 0x30, 0x75, 0x3b, 0x20, 0x69, //  (uint i = 0u; i
	0x20, 0x3c, 0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x2d, 0x20, 0x31, 0x75, //  < numNodes - 1u
	0x3b, 0x20, 0x69, 0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x6e, // ; i++) {.float n
	0x31, 0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x28, // 1cosTheta = dot(
	0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x30, 0x75, 0x5d, 0x2e, 0x6e, 0x6f, // nodes[i + 0u].no
	0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, // rmal, u_rayNorma
	0x6c, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x6e, 0x32, // l.xyz);.float n2
	0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x28, 0x6e, // cosTheta = dot(n
	0x6f, 0x64, 0x65, 0x73, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, // odes[i + 1u].nor
	0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x2d, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, // mal, -u_rayNorma
	0x6c, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x6e, 0x31, 0x63, 0x6f, // l.xyz);.if (n1co
	0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x26, 0x26, 0x20, // sTheta > 0.0 && 
	0x6e, 0x32, 0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, // n2cosTheta > 0.0
	0x29, 0x20, 0x7b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, // ) {.float cosThe
	0x74, 0x61, 0x20, 0x3d, 0x20, 0x6e, 0x31, 0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x20, // ta = n1cosTheta 
	0x2a, 0x20, 0x6e, 0x32, 0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x3b, 0x0a, 0x6e, 0x6f, // * n2cosTheta;.no
	0x64, 0x65, 0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x30, // deRadiance[i + 0
	0x75, 0x5d, 0x20, 0x3d, 0x20, 0x62, 0x72, 0x64, 0x66, 0x20, 0x2a, 0x20, 0x6e, 0x6f, 0x64, 0x65, // u] = brdf * node
	0x73, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, // s[i + 1u].color 
	0x2a, 0x20, 0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x3b, 0x0a, 0x6e, 0x6f, 0x64, 0x65, // * cosTheta;.node
	0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x69, 0x20, 0x2b, 0x20, 0x31, 0x75, 0x5d, // Radiance[i + 1u]
	0x20, 0x3d, 0x20, 0x62, 0x72, 0x64, 0x66, 0x20, 0x2a, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, //  = brdf * nodes[
	0x69, 0x20, 0x2b, 0x20, 0x30, 0x75, 0x5d, 0x2e, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x2a, 0x20, // i + 0u].color * 
	0x63, 0x6f, 0x73, 0x54, 0x68, 0x65, 0x74, 0x61, 0x3b, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, // cosTheta;.}.}.}.
	0x69, 0x66, 0x20, 0x28, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x75, 0x5f, 0x73, 0x6b, 0x79, 0x43, 0x6f, // if (uint(u_skyCo
	0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, 0x77, 0x29, 0x20, 0x21, // lor_enabled.w) !
	0x3d, 0x20, 0x30, 0x75, 0x20, 0x26, 0x26, 0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, // = 0u && numNodes
	0x20, 0x3e, 0x20, 0x30, 0x75, 0x29, 0x20, 0x7b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x64, 0x6f, 0x74, //  > 0u) {.if (dot
	0x28, 0x6e, 0x6f, 0x64, 0x65, 0x73, 0x5b, 0x30, 0x75, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // (nodes[0u].norma
	0x6c, 0x2c, 0x20, 0x2d, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, // l, -u_rayNormal.
	0x78, 0x79, 0x7a, 0x29, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x6e, 0x6f, 0x64, 0x65, // xyz) > 0.0).node
	0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x30, 0x75, 0x5d, 0x20, 0x3d, 0x20, 0x75, // Radiance[0u] = u
	0x5f, 0x73, 0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, 0x62, 0x6c, 0x65, // _skyColor_enable
	0x64, 0x2e, 0x72, 0x67, 0x62, 0x3b, 0x0a, 0x69, 0x66, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x28, 0x6e, // d.rgb;.if (dot(n
	0x6f, 0x64, 0x65, 0x73, 0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x2d, 0x20, // odes[numNodes - 
	0x31, 0x75, 0x5d, 0x2e, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x75, 0x5f, 0x72, 0x61, // 1u].normal, u_ra
	0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x3e, 0x20, 0x30, // yNormal.xyz) > 0
	0x2e, 0x30, 0x29, 0x0a, 0x6e, 0x6f, 0x64, 0x65, 0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, // .0).nodeRadiance
	0x5b, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x2d, 0x20, 0x31, 0x75, 0x5d, 0x20, // [numNodes - 1u] 
	0x3d, 0x20, 0x75, 0x5f, 0x73, 0x6b, 0x79, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x65, 0x6e, 0x61, // = u_skyColor_ena
	0x62, 0x6c, 0x65, 0x64, 0x2e, 0x72, 0x67, 0x62, 0x3b, 0x0a, 0x7d, 0x0a, 0x66, 0x6f, 0x72, 0x20, // bled.rgb;.}.for 
	0x28, 0x75, 0x69, 0x6e, 0x74, 0x20, 0x6a, 0x20, 0x3d, 0x20, 0x30, 0x75, 0x3b, 0x20, 0x6a, 0x20, // (uint j = 0u; j 
	0x3c, 0x20, 0x6e, 0x75, 0x6d, 0x4e, 0x6f, 0x64, 0x65, 0x73, 0x3b, 0x20, 0x6a, 0x2b, 0x2b, 0x29, // < numNodes; j++)
	0x20, 0x7b, 0x0a, 0x76, 0x65, 0x63, 0x33, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, //  {.vec3 color = 
	0x6e, 0x6f, 0x64, 0x65, 0x52, 0x61, 0x64, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x5b, 0x6a, 0x5d, 0x3b, // nodeRadiance[j];
	0x0a, 0x76, 0x65, 0x63, 0x32, 0x20, 0x75, 0x76, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x64, 0x65, 0x73, // .vec2 uv = nodes
	0x5b, 0x6a, 0x5d, 0x2e, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x69, 0x66, // [j].texcoord;.if
	0x20, 0x28, 0x75, 0x76, 0x2e, 0x78, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x26, 0x26, 0x20, //  (uv.x > 0.0 && 
	0x75, 0x76, 0x2e, 0x79, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x20, 0x7b, 0x0a, 0x69, 0x6d, // uv.y > 0.0) {.im
	0x61, 0x67, 0x65, 0x41, 0x74, 0x6f, 0x6d, 0x69, 0x63, 0x41, 0x64, 0x64, 0x28, 0x75, 0x5f, 0x72, // ageAtomicAdd(u_r
	0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, // ayBundleLightmap
	0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, // Sampler, rayBund
	0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, // leLightmapDataUv
	0x28, 0x75, 0x76, 0x2c, 0x20, 0x30, 0x75, 0x29, 0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x63, // (uv, 0u), uint(c
	0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x72, 0x20, 0x2a, 0x20, 0x32, 0x35, 0x35, 0x2e, 0x30, 0x29, 0x29, // olor.r * 255.0))
	0x3b, 0x0a, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x41, 0x74, 0x6f, 0x6d, 0x69, 0x63, 0x41, 0x64, 0x64, // ;.imageAtomicAdd
	0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, // (u_rayBundleLigh
	0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, // tmapSampler, ray
	0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, // BundleLightmapDa
	0x74, 0x61, 0x55, 0x76, 0x28, 0x75, 0x76, 0x2c, 0x20, 0x31, 0x75, 0x29, 0x2c, 0x20, 0x75, 0x69, // taUv(uv, 1u), ui
	0x6e, 0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x67, 0x20, 0x2a, 0x20, 0x32, 0x35, 0x35, // nt(color.g * 255
	0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x41, 0x74, 0x6f, 0x6d, 0x69, // .0));.imageAtomi
	0x63, 0x41, 0x64, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, // cAdd(u_rayBundle
	0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, // LightmapSampler,
	0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, //  rayBundleLightm
	0x61, 0x70, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x75, 0x76, 0x2c, 0x20, 0x32, 0x75, 0x29, // apDataUv(uv, 2u)
	0x2c, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x62, 0x20, 0x2a, // , uint(color.b *
	0x20, 0x32, 0x35, 0x35, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x41, //  255.0));.imageA
	0x74, 0x6f, 0x6d, 0x69, 0x63, 0x41, 0x64, 0x64, 0x28, 0x75, 0x5f, 0x72, 0x61, 0x79, 0x42, 0x75, // tomicAdd(u_rayBu
	0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, // ndleLightmapSamp
	0x6c, 0x65, 0x72, 0x2c, 0x20, 0x72, 0x61, 0x79, 0x42, 0x75, 0x6e, 0x64, 0x6c, 0x65, 0x4c, 0x69, // ler, rayBundleLi
	0x67, 0x68, 0x74, 0x6d, 0x61, 0x70, 0x44, 0x61, 0x74, 0x61, 0x55, 0x76, 0x28, 0x75, 0x76, 0x2c, // ghtmapDataUv(uv,
	0x20, 0x33, 0x75, 0x29, 0x2c, 0x20, 0x31, 0x75, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x7d, 0x0a, 0x7d, //  3u), 1u);.}.}.}
	0x0a, 0x7d, 0x0a, 0x00,                                                                         // .}..
};
